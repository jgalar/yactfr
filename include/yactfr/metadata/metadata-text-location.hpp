/*
 * Metadata text source location.
 *
 * Copyright (C) 2016-2018 Philippe Proulx <eepp.ca>
 *
 * This software may be modified and distributed under the terms
 * of the MIT license. See the LICENSE file for details.
 */

/*!
@file
@brief  Metadata text source location.

@ingroup metadata
*/

#ifndef _YACTFR_METADATA_METADATA_TEXT_LOCATION_HPP
#define _YACTFR_METADATA_METADATA_TEXT_LOCATION_HPP

#include <yactfr/aliases.hpp>

#include "metadata-base.hpp"

namespace yactfr {

/*!
@brief  Source location in a metadata text.

@ingroup metadata
*/
class MetadataTextLocation final :
    public MetadataBase
{
public:
    explicit MetadataTextLocation(Index lineNumber,
                                  Index colNumber) noexcept;

    MetadataTextLocation(const MetadataTextLocation& other) noexcept;

    /// Line number (zero-based).
    Index lineNumber() const noexcept
    {
        return _lineNumber;
    }

    /// Column number (zero-based) within the line number.
    Index colNumber() const noexcept
    {
        return _colNumber;
    }

    /// One-based line number.
    Index natLineNumber() const noexcept
    {
        return _lineNumber + 1;
    }

    /// Column number (one-based) within the line number.
    Index natColNumber() const noexcept
    {
        return _colNumber + 1;
    }

private:
    Index _lineNumber, _colNumber;
};

} // namespace yactfr

#endif // _YACTFR_METADATA_METADATA_TEXT_LOCATION_HPP
