#include "http_time.h"

#include <exception>
#include <sstream>
#include <iomanip> // put_time|get_time

namespace seevve
{
namespace http
{
// C++ format
const char* const Iso8601TimeFormat = "%Y-%m-%dT%H:%M:%S%z";
// Tue, 15 Nov 2010 08:12:31 GMT
const char* const HttpTimeFormat = "%a, %d %b %Y %H:%M:%S %Z";

std::string timeToString(const std::time_t dateTime, const char* format)
{
  struct tm t;
  gmtime_r(&dateTime, &t);
  std::ostringstream oss;
  oss << std::put_time(&t, format);
  return oss.str();
}


std::time_t timeFromString(const std::string& s, const char* format)
{
  std::istringstream is(s);
  std::tm t = {};
  is >> std::get_time(&t, format);
  time_t res = mktime(&t);
  if (res == (time_t) -1)
  {
    std::ostringstream oss;
    oss << "Ошибка при конвертировании строки во время mktime, passed: " << s;
    throw std::invalid_argument(oss.str().c_str());
  }
  return res;
}

} // namespace http
} // namespace seevve

