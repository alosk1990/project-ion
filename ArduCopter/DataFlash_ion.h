#include <AP_HAL/AP_HAL.h>
#include <DataFlash/DataFlash.h>

#define LOG_ION_MSG 1

struct PACKED log_Ion {
    LOG_PACKET_HEADER;
    uint16_t v;
};

static const struct LogStructure log_structure[] = {
    LOG_COMMON_STRUCTURES,
    { LOG_ION_MSG, sizeof(log_Ion),"TEST","HHHHii","V1" }
};

class DataFlashIon {
public:
    void init();
    void write();
    void read();
private:
    DataFlash_Class dataflash{"Ion 0.1"};
};