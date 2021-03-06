/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#pragma once

#include "converters.h"

#include <QtCore/QVector>
#include "converters.h"
#include "csapi/definitions/push_rule.h"

namespace QMatrixClient
{
    // Data structures

    struct PushRuleset
    {
        QVector<PushRule> content;
        QVector<PushRule> override;
        QVector<PushRule> room;
        QVector<PushRule> sender;
        QVector<PushRule> underride;
    };

    QJsonObject toJson(const PushRuleset& pod);

    template <> struct FromJson<PushRuleset>
    {
        PushRuleset operator()(const QJsonValue& jv);
    };

} // namespace QMatrixClient
