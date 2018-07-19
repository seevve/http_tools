#pragma once
#ifndef SEEVVE_HTTP_CODES_H
#define SEEVVE_HTTP_CODES_H

#include <string>

namespace seevve
{
namespace http
{
  enum HttpStatusCode
  {
    // 1xx: Informational 
    Continue = 100,
    SwitchingProtocols = 101,
    Processing = 102,

    // 2xx: Success
    Ok = 200,
    Created = 201,
    Accepted = 202,
    NonAuthoritativeInformation = 203,
    NoContent = 204,
    ResetContent = 205,
    PartialContent = 206,
    MultiStatus = 207,
    AlreadyReported = 208,
    IMUsed = 226,

    // 3xx: Redirection
    MultipleChoices = 300,
    MovedPermanently = 301,
//    [[deprecated("use Found instead")]] MovedTemporarily = 302,
    Found = 302,
    SeeOther = 303,
    NotModified = 304,
    UseProxy = 305,
    // reserved 306
    TemporaryRedirect = 307,
    PermanentRedirect = 308,

    // 4xx: Client Error
    BadRequest = 400,
    Unauthorized = 401,
    PaymentRequired = 402,
    Forbidden = 403,
    NotFound = 404,
    MethodNotAllowed = 405,
    NotAcceptable = 406,
    ProxyAuthenticationRequired = 407,
    RequestTimeout = 408,
    Conflict = 409,
    Gone = 410,
    LengthRequired = 411,
    PreconditionFailed = 412,
    PayloadTooLarge = 413,
    URITooLong = 414,
    UnsupportedMediaType = 415,
    RangeNotSatisfiable = 416,
    ExpectationFailed = 417,
    IAmATeapot = 418,
    MisdirectedRequest = 421,
    UnprocessableEntity = 422,
    Locked = 423,
    FailedDependency = 424,
    UpgradeRequired = 426,
    PreconditionRequired = 428,
    TooManyRequests = 429,
    RequestHeaderFieldsTooLarge = 431,
    RetryWith = 449,
    UnavailableForLegalReasons = 451,

    // 5xx: Server Error
    InternalServerError = 500,
    NotImplemented = 501,
    BadGateway = 502,
    ServiceUnavailable = 503,
    GatewayTimeout = 504,
    HTTPVersionNotSupported = 505,
    VariantAlsoNegotiates = 506,
    InsufficientStorage = 507,
    LoopDetected = 508,
    BandwidthLimitExceeded = 509,
    NotExtended = 510,
    NetworkAuthenticationRequired = 511,
    UnknownError = 520,
    WebServerIsDown = 521,
    ConnectionTimedOut = 522,
    OriginIsUnreachable = 523,
    ATimeoutOccurred = 524,
    SSLHandshakeFailed = 525,
    InvalidSSLCertificate = 526,
  };

  const std::string& statusString(HttpStatusCode code);
} // namespace http
} // namespace seevve

#endif//SEEVVE_HTTP_CODES_H

