#ifndef AKA_SERVICE_LOCATOR_H
#define AKA_SERVICE_LOCATOR_H

#include <aka/iface/object.h>
#include <aka/rtl/declare_iid.h>

namespace aka
{
struct IServiceLocator
    : public IObject
{
    EKA_DECLARE_IID("aka.IServiceLocator")

    virtual result_t GetInterface(iid_t iid, clsid_t clsid, ptr_t* object);
};

}
#endif //AKA_SERVICE_LOCATOR_H
