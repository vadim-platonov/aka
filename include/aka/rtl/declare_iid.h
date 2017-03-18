#ifndef AKA_DECLARE_IID_H
#define AKA_DECLARE_IID_H

#include <aka/rtl/crc32.h>
#include <aka/rtl/types.h>

#define AKA_DECLARE_IID(interface) static const aka::iid_t m_iid = COMPILE_TIME_CRC32_STR(interface);

#endif //AKA_DECLARE_IID_H
