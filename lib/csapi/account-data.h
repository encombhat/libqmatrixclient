/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#pragma once

#include "jobs/basejob.h"

#include <QtCore/QJsonObject>

namespace QMatrixClient
{
    // Operations

    /// Set some account_data for the user.
    /// 
    /// Set some account_data for the client. This config is only visible to the user
    /// that set the account_data. The config will be synced to clients in the
    /// top-level ``account_data``.
    class SetAccountDataJob : public BaseJob
    {
        public:
            /*! Set some account_data for the user.
             * \param userId 
             *   The id of the user to set account_data for. The access token must be
             *   authorized to make requests for this user id.
             * \param type 
             *   The event type of the account_data to set. Custom types should be
             *   namespaced to avoid clashes.
             * \param content 
             *   The content of the account_data
             */
            explicit SetAccountDataJob(const QString& userId, const QString& type, const QJsonObject& content = {});
    };

    /// Set some account_data for the user.
    /// 
    /// Set some account_data for the client on a given room. This config is only
    /// visible to the user that set the account_data. The config will be synced to
    /// clients in the per-room ``account_data``.
    class SetAccountDataPerRoomJob : public BaseJob
    {
        public:
            /*! Set some account_data for the user.
             * \param userId 
             *   The id of the user to set account_data for. The access token must be
             *   authorized to make requests for this user id.
             * \param roomId 
             *   The id of the room to set account_data on.
             * \param type 
             *   The event type of the account_data to set. Custom types should be
             *   namespaced to avoid clashes.
             * \param content 
             *   The content of the account_data
             */
            explicit SetAccountDataPerRoomJob(const QString& userId, const QString& roomId, const QString& type, const QJsonObject& content = {});
    };
} // namespace QMatrixClient
