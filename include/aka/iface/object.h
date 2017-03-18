#ifndef AKA_OBJECT_H
#define AKA_OBJECT_H

#include <aka/rtl/declare_iid.h>
#include <aka/rtl/types.h>

namespace aka
{
struct IObject
{
    AKA_DECLARE_IID("aka.IObject");

    virtual ~IObject()
    {
    }
    virtual uint32_t AddRef() = 0;
    virtual uint32_t Release() = 0;
    virtual result_t QueryInterface(iid_t iid, ptr_t* object) = 0;
};
}

#endif //AKA_OBJECT_H
