// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Trace API (cloudtrace/v2)
// Description:
//   Sends application trace data to Cloud Trace for viewing. Trace data is
//   collected for all App Engine applications by default. Trace data from other
//   applications can be provided using this API. This library is used to
//   interact with the Trace API directly. If you are looking to instrument your
//   application for Cloud Trace, we recommend using OpenCensus.
// Documentation:
//   https://cloud.google.com/trace

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudTraceCloudPlatform;
/**
 *  Authorization scope: Write Trace data for a project or application
 *
 *  Value "https://www.googleapis.com/auth/trace.append"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeCloudTraceTraceAppend;

// ----------------------------------------------------------------------------
//   GTLRCloudTraceService
//

/**
 *  Service for executing Cloud Trace API queries.
 *
 *  Sends application trace data to Cloud Trace for viewing. Trace data is
 *  collected for all App Engine applications by default. Trace data from other
 *  applications can be provided using this API. This library is used to
 *  interact with the Trace API directly. If you are looking to instrument your
 *  application for Cloud Trace, we recommend using OpenCensus.
 */
@interface GTLRCloudTraceService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRCloudTraceQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
