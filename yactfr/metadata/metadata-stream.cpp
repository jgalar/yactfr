/*
 * Metadata stream.
 *
 * Copyright (C) 2016-2018 Philippe Proulx <eepp.ca>
 *
 * This software may be modified and distributed under the terms
 * of the MIT license. See the LICENSE file for details.
 */

#include <cstring>

#include <yactfr/metadata/metadata-stream.hpp>

namespace yactfr {

MetadataStream::MetadataStream(std::string&& text) :
    _text {std::move(text)}
{
}

MetadataStream::~MetadataStream()
{
}

bool MetadataStream::hasSignature() const noexcept
{
    const char * const sig = "/* CTF 1.8";

    /* Using std::strncmp() to avoid exceptions */
    return std::strncmp(_text.c_str(), sig, std::strlen(sig)) == 0;
}

} // namespace yactfr
