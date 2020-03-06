// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Billing Budget API (billingbudgets/v1beta1)
// Description:
//   The Cloud Billing Budget API stores Cloud Billing budgets, which define a
//   budget plan and the rules to execute as spend is tracked against that plan.
// Documentation:
//   https://cloud.google.com/billing/docs/how-to/budget-api-overview

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1CreateBudgetRequest;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1UpdateBudgetRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other CloudBillingBudget query classes.
 */
@interface GTLRCloudBillingBudgetQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Creates a new budget. See
 *  <a href="https://cloud.google.com/billing/quotas">Quotas and limits</a>
 *  for more information on the limits of the number of budgets you can create.
 *
 *  Method: billingbudgets.billingAccounts.budgets.create
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBillingBudgetCloudPlatform
 */
@interface GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsCreate : GTLRCloudBillingBudgetQuery
// Previous library name was
//   +[GTLQueryCloudBillingBudget queryForBillingAccountsBudgetsCreateWithObject:parent:]

/**
 *  Required. The name of the billing account to create the budget in. Values
 *  are of the form `billingAccounts/{billingAccountId}`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1Budget.
 *
 *  Creates a new budget. See
 *  <a href="https://cloud.google.com/billing/quotas">Quotas and limits</a>
 *  for more information on the limits of the number of budgets you can create.
 *
 *  @param object The @c
 *    GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1CreateBudgetRequest
 *    to include in the query.
 *  @param parent Required. The name of the billing account to create the budget
 *    in. Values
 *    are of the form `billingAccounts/{billingAccountId}`.
 *
 *  @return GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsCreate
 */
+ (instancetype)queryWithObject:(GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1CreateBudgetRequest *)object
                         parent:(NSString *)parent;

@end

/**
 *  Deletes a budget. Returns successfully if already deleted.
 *
 *  Method: billingbudgets.billingAccounts.budgets.delete
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBillingBudgetCloudPlatform
 */
@interface GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsDelete : GTLRCloudBillingBudgetQuery
// Previous library name was
//   +[GTLQueryCloudBillingBudget queryForBillingAccountsBudgetsDeleteWithname:]

/**
 *  Required. Name of the budget to delete. Values are of the form
 *  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBillingBudget_GoogleProtobufEmpty.
 *
 *  Deletes a budget. Returns successfully if already deleted.
 *
 *  @param name Required. Name of the budget to delete. Values are of the form
 *    `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 *
 *  @return GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsDelete
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a budget.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. When reading from the API, you will not
 *  see these fields in the return value, though they may have been set
 *  in the cloud console.
 *
 *  Method: billingbudgets.billingAccounts.budgets.get
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBillingBudgetCloudPlatform
 */
@interface GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsGet : GTLRCloudBillingBudgetQuery
// Previous library name was
//   +[GTLQueryCloudBillingBudget queryForBillingAccountsBudgetsGetWithname:]

/**
 *  Required. Name of budget to get. Values are of the form
 *  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1Budget.
 *
 *  Returns a budget.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. When reading from the API, you will not
 *  see these fields in the return value, though they may have been set
 *  in the cloud console.
 *
 *  @param name Required. Name of budget to get. Values are of the form
 *    `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 *
 *  @return GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsGet
 */
+ (instancetype)queryWithName:(NSString *)name;

@end

/**
 *  Returns a list of budgets for a billing account.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. When reading from the API, you will not
 *  see these fields in the return value, though they may have been set
 *  in the cloud console.
 *
 *  Method: billingbudgets.billingAccounts.budgets.list
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBillingBudgetCloudPlatform
 */
@interface GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsList : GTLRCloudBillingBudgetQuery
// Previous library name was
//   +[GTLQueryCloudBillingBudget queryForBillingAccountsBudgetsListWithparent:]

/**
 *  Optional. The maximum number of budgets to return per page.
 *  The default and maximum value are 100.
 */
@property(nonatomic, assign) NSInteger pageSize;

/**
 *  Optional. The value returned by the last `ListBudgetsResponse` which
 *  indicates that this is a continuation of a prior `ListBudgets` call,
 *  and that the system should return the next page of data.
 */
@property(nonatomic, copy, nullable) NSString *pageToken;

/**
 *  Required. Name of billing account to list budgets under. Values
 *  are of the form `billingAccounts/{billingAccountId}`.
 */
@property(nonatomic, copy, nullable) NSString *parent;

/**
 *  Fetches a @c
 *  GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1ListBudgetsResponse.
 *
 *  Returns a list of budgets for a billing account.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. When reading from the API, you will not
 *  see these fields in the return value, though they may have been set
 *  in the cloud console.
 *
 *  @param parent Required. Name of billing account to list budgets under.
 *    Values
 *    are of the form `billingAccounts/{billingAccountId}`.
 *
 *  @return GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsList
 *
 *  @note Automatic pagination will be done when @c shouldFetchNextPages is
 *        enabled. See @c shouldFetchNextPages on @c GTLRService for more
 *        information.
 */
+ (instancetype)queryWithParent:(NSString *)parent;

@end

/**
 *  Updates a budget and returns the updated budget.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. Budget fields that are not exposed in
 *  this API will not be changed by this method.
 *
 *  Method: billingbudgets.billingAccounts.budgets.patch
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopeCloudBillingBudgetCloudPlatform
 */
@interface GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsPatch : GTLRCloudBillingBudgetQuery
// Previous library name was
//   +[GTLQueryCloudBillingBudget queryForBillingAccountsBudgetsPatchWithObject:name:]

/**
 *  Output only. Resource name of the budget.
 *  The resource name implies the scope of a budget. Values are of the form
 *  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Fetches a @c GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1Budget.
 *
 *  Updates a budget and returns the updated budget.
 *  WARNING: There are some fields exposed on the Google Cloud Console that
 *  aren’t available on this API. Budget fields that are not exposed in
 *  this API will not be changed by this method.
 *
 *  @param object The @c
 *    GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1UpdateBudgetRequest
 *    to include in the query.
 *  @param name Output only. Resource name of the budget.
 *    The resource name implies the scope of a budget. Values are of the form
 *    `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 *
 *  @return GTLRCloudBillingBudgetQuery_BillingAccountsBudgetsPatch
 */
+ (instancetype)queryWithObject:(GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1beta1UpdateBudgetRequest *)object
                           name:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
