/* Contains ID information for our various entites and components as
 * we may require a way to update all entites or all components of similar
 * types before updateing the next component.
 *
 * Written by: Dbeela
 * Date: 02/11/21
 * Version 1.0.0
 */

#pragma once
#ifndef TYPEID_H
#define TYPEID_H

#include <cstdint>

typedef std::uint64_t IDType;
typedef IDType EntityID;
typedef IDType ComponentTypeID;
const IDType NULL_ENTITY = 0;

template<class T>
class TypeIdGenerator
{
private:

    static IDType m_count;

public:

    template<class U>
    static const IDType GetNewID()
    {
        static const IDType idCounter = m_count++;
        return idCounter;
    }
};

template<class T> IDType TypeIdGenerator<T>::m_count = 0;

#endif // TYPEID_H
