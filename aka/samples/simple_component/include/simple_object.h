#ifndef AKA_SAMPLES_SIMPLE_OBJECT_H
#define AKA_SAMPLES_SIMPLE_OBJECT_H

#include <aka/iface/object.h>

namespace aka
{
namespace samples
{

struct ISimpleObject
    : public IObject
{
    EKA_DECLARE_IID("aka.samples.ISimpleObject");

    virtual result_t HelloWorld() = 0;
};
}
}
#endif //AKA_SAMPLES_SIMPLE_OBJECT_H
