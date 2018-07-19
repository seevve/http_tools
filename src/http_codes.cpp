#include "http_codes.h"

#include <map>
#include <exception>
#include <sstream>

namespace seevve
{
namespace http
{
  const std::string& statusString(const HttpStatusCode code)
  {
    using StatusStringStorage = std::map<HttpStatusCode, std::string>;
    static const StatusStringStorage Storage = {
      // 1xx: Informational
      { Continue, "Continue" },
      { SwitchingProtocols, "Switching Protocols" },
      { Processing, "Processing" },
      // 2xx: Success
      { Ok, "OK" },
      { Created, "Created" },
      { Accepted, "Accepted" },
      { NonAuthoritativeInformation, "Non-Authoritative Information" },
      { NoContent, "No Content" },
      { ResetContent, "Reset Content" },
      { PartialContent, "Partial Content" },
      { MultiStatus, "Multi-Status" },
      { AlreadyReported, "Already Reported" },
      { IMUsed, "IMUsed" },
      // 3xx: Redirection
      { MultipleChoices, "Multiple Choices" },
      { MovedPermanently, "Moved Permanently" },
      { Found, "Found" },
      { SeeOther, "See Other" },
      { NotModified, "Not Modified" },
      { UseProxy, "Use Proxy" },
      { TemporaryRedirect, "Temporary Redirect" },
      { PermanentRedirect, "Permanent Redirect" },
      // 4xx: Client Error
      { BadRequest, "Bad Request" },
      { Unauthorized, "Unauthorized" },
      { PaymentRequired, "Payment Required" },
      { Forbidden, "Forbidden" },
      { NotFound, "Not Found" },
      { MethodNotAllowed, "Method Not Allowed" },
      { NotAcceptable, "Not Acceptable" },
      { ProxyAuthenticationRequired, "Proxy Authentication Required" },
      { RequestTimeout, "Request Timeout" },
      { Conflict , "Conflict" },
      { Gone, "Gone" },
      { LengthRequired, "Length Required" },
      { PreconditionFailed, "Precondition Failed" },
      { PayloadTooLarge, "Payload Too Large" },
      { URITooLong, "URI Too Long" },
      { UnsupportedMediaType, "Unsupported Media Type" },
      { RangeNotSatisfiable, "Range Not Satisfiable" },
      { ExpectationFailed, "Expectation Failed" },
      { IAmATeapot, "I’m a teapot" },
      { MisdirectedRequest, "Misdirected Request" },
      { UnprocessableEntity, "Unprocessable Entity" },
      { Locked, "Locked" },
      { FailedDependency, "Failed Dependency" },
      { UpgradeRequired, "Upgrade Required" },
      { PreconditionRequired, "PreconditionRequired" },
      { TooManyRequests, "Too Many Requests" },
      { RequestHeaderFieldsTooLarge, "Request Header Fields Too Large" },
      { RetryWith, "Retry With" },
      { UnavailableForLegalReasons, "UnavailableForLegalReasons" },
      // 5xx: Server Error
      { InternalServerError, "Internal Server Error" },
      { NotImplemented, "Not Implemented" },
      { BadGateway, "Bad Gateway" },
      { ServiceUnavailable, "Service Unavailable" },
      { GatewayTimeout, "Gateway Timeout" },
      { HTTPVersionNotSupported, "HTTP Version Not Supported" },
      { VariantAlsoNegotiates, "Variant Also Negotiates" },
      { InsufficientStorage, "Insufficient Storage" },
      { LoopDetected, "Loop Detected" },
      { BandwidthLimitExceeded, "Bandwidth Limit Exceeded" },
      { NotExtended, "Not Extended" },
      { NetworkAuthenticationRequired, "Network Authentication Required" },
      { UnknownError, "Unknown Error" },
      { WebServerIsDown, "Web Server Is Down" },
      { ConnectionTimedOut, "Connection Timed Out" },
      { OriginIsUnreachable, "Origin Is Unreachable" },
      { ATimeoutOccurred, "A Timeout Occurred" },
      { SSLHandshakeFailed, "SSL Handshake Failed" },
      { InvalidSSLCertificate, "Invalid SSL Certificate" },
    };

    const StatusStringStorage::const_iterator it = Storage.find(code);
    if (it != Storage.end())
    {
      std::ostringstream oss;
      oss << "Value \"" << code << "\" is unknown HTTP status code";
      throw std::invalid_argument(oss.str().c_str());
    }
    return it->second;
  }
  
} // namespace http
} // namespace seevve
