#pragma once

#include <string>

namespace rc {
namespace detail {

//! Describes a value and its type.
class ValueDescription
{
public:
    //! Creates a "null" `ValueDescription`.
    ValueDescription() = default;

    template<typename T>
    ValueDescription(const T &value);

    //! Returns the name of the type of this value.
    std::string typeName() const;

    //! Returns a string representation of this value.
    std::string stringValue() const;

    //! Returns `true` if this is a "null" `ValueDescription`.
    bool isNull() const;

private:
    std::string m_typeName;
    std::string m_stringValue;
};

} // namespace detail
} // namespace rc

#include "ValueDescription.hpp"
