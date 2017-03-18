#ifndef AKA_OBJECT_BASE_H
#define AKA_OBJECT_BASE_H

#include <atomic>

namespace aka
{

template <typename I>
class ObjectBase
    : public I
{
public:
    ObjectBase()
        : m_ref(1)
    {

    }

    std::uint32_t AddRef() override
    {
        return ++m_ref;
    }

    std::uint32_t Release() override
    {
        if
    }

    result_t QueryInteface(iid_t iid, ptr_t* object) override
    {
        if (iid == I::m_iid)
        {
            *object = this;
            *object->AddRef();
        }
    }
private:
    std::atomic<std::uint32_t> m_ref;
};

}
#endif //AKA_OBJECT_BASE_H
