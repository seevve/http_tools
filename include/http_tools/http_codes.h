#pragma once
#ifndef SEEVVE_HTTP_CODES_H
#define SEEVVE_HTTP_CODES_H

#include <string>

namespace seevve
{
namespace http
{
  using HttpStatusCode = uint16_t;

  // 1xx: Informational 
  const HttpStatusCode Continue = 100;
  const HttpStatusCode SwitchingProtocols = 101;
  const HttpStatusCode Processing = 102;

  // 2xx: Success
  const HttpStatusCode Ok = 200;
  const HttpStatusCode Created = 201;
  const HttpStatusCode Accepted = 202;
  const HttpStatusCode NonAuthoritativeInformation = 203;
  const HttpStatusCode NoContent = 204;
  const HttpStatusCode ResetContent = 205;
  const HttpStatusCode PartialContent = 206;
  const HttpStatusCode MultiStatus = 207;
  const HttpStatusCode AlreadyReported = 208;
  const HttpStatusCode IMUsed = 226;

  // 3xx: Redirection
  const HttpStatusCode MultipleChoices = 300;
  const HttpStatusCode MovedPermanently = 301;
  [[deprecated("use Found instead")]] const HttpStatusCode MovedTemporarily = 302;
  const HttpStatusCode Found = 302;
  const HttpStatusCode SeeOther = 303;
  const HttpStatusCode NotModified = 304;
  const HttpStatusCode UseProxy = 305;
  // reserved const HttpStatusCode 306
  const HttpStatusCode TemporaryRedirect = 307;
  const HttpStatusCode PermanentRedirect = 308;

  // 4xx: Client Error
  const HttpStatusCode BadRequest = 400;
  const HttpStatusCode Unauthorized = 401;
  const HttpStatusCode PaymentRequired = 402;
  const HttpStatusCode Forbidden = 403;
  const HttpStatusCode NotFound = 404;
  const HttpStatusCode MethodNotAllowed = 405;
  const HttpStatusCode NotAcceptable = 406;
  const HttpStatusCode ProxyAuthenticationRequired = 407;
  const HttpStatusCode RequestTimeout = 408;
  const HttpStatusCode Conflict = 409;
  const HttpStatusCode Gone = 410;
  const HttpStatusCode LengthRequired = 411;
  const HttpStatusCode PreconditionFailed = 412;
  const HttpStatusCode PayloadTooLarge = 413;
  const HttpStatusCode URITooLong = 414;
  const HttpStatusCode UnsupportedMediaType = 415;
  const HttpStatusCode RangeNotSatisfiable = 416;
  const HttpStatusCode ExpectationFailed = 417;
  const HttpStatusCode IAmATeapot = 418;
  const HttpStatusCode MisdirectedRequest = 421;
  const HttpStatusCode UnprocessableEntity = 422;
  const HttpStatusCode Locked = 423;
  const HttpStatusCode FailedDependency = 424;
  const HttpStatusCode UpgradeRequired = 426;
  const HttpStatusCode PreconditionRequired = 428;
  const HttpStatusCode TooManyRequests = 429;
  const HttpStatusCode RequestHeaderFieldsTooLarge = 431;
  const HttpStatusCode RetryWith = 449;
  const HttpStatusCode UnavailableForLegalReasons = 451;

  // 5xx: Server Error
  const HttpStatusCode InternalServerError = 500;
  const HttpStatusCode NotImplemented = 501;
  const HttpStatusCode BadGateway = 502;
  const HttpStatusCode ServiceUnavailable = 503;
  const HttpStatusCode GatewayTimeout = 504;
  const HttpStatusCode HTTPVersionNotSupported = 505;
  const HttpStatusCode VariantAlsoNegotiates = 506;
  const HttpStatusCode InsufficientStorage = 507;
  const HttpStatusCode LoopDetected = 508;
  const HttpStatusCode BandwidthLimitExceeded = 509;
  const HttpStatusCode NotExtended = 510;
  const HttpStatusCode NetworkAuthenticationRequired = 511;
  const HttpStatusCode UnknownError = 520;
  const HttpStatusCode WebServerIsDown = 521;
  const HttpStatusCode ConnectionTimedOut = 522;
  const HttpStatusCode OriginIsUnreachable = 523;
  const HttpStatusCode ATimeoutOccurred = 524;
  const HttpStatusCode SSLHandshakeFailed = 525;
  const HttpStatusCode InvalidSSLCertificate = 526;

  const std::string& statusString(const HttpStatusCode code);
} // namespace http
} // namespace seevve

#endif//SEEVVE_HTTP_CODES_H

