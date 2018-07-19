#pragma once
#ifndef SEEVVE_HTTP_TIME_H
#define SEEVVE_HTTP_TIME_H

#include <string>
#include <ctime>

namespace seevve
{
namespace http
{
  extern const char* const HttpTimeFormat;
  extern const char* const Iso8601TimeFormat;

  std::string timeToString(const std::time_t dateTime, const char* format = HttpTimeFormat);
  std::time_t timeFromString(const std::string& s, const char* format = HttpTimeFormat);
} // namespace http
} // namespace seevve
#endif//SEEVVE_HTTP_TIME_H


