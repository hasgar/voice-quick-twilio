//
//  TVONotificationDelegate.h
//  TwilioVoice
//
//  Copyright © 2016-2017 Twilio, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TVOCallInvite;

/**
 * The `TVONotificationDelegate`'s methods allow the delegate to be informed when
 * incoming call invites are received or canceled.
 */
@protocol TVONotificationDelegate <NSObject>

/**
 * Notifies the delegate that an incoming call invite has been received.
 *
 * @param callInvite A `<TVOCallInvite>` object.
 *
 * @see TVOCallInvite
 */
- (void)callInviteReceived:(nonnull TVOCallInvite *)callInvite;

/**
 * Notifies the delegate that an incoming call invite has been canceled.
 *
 * @param callInvite A `<TVOCallInvite>` object. ***Note:*** This may be `nil` if
 *                   a `<TVOCallInvite>` object was not previously created.
 *
 * @see TVOCallInvite
 */
- (void)callInviteCanceled:(nullable TVOCallInvite *)callInvite;

/**
 * Notifies the delegate that an error occurred when processing the `VoIP`
 * push notification payload.
 *
 * @param error An `NSError` object describing the error.
 */
- (void)notificationError:(nonnull NSError *)error;

@end
