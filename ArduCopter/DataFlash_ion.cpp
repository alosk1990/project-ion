
#include "DataFlash_ion.h"

void DataFlashIon::init(void)
{
/*
    dataflash.Init(log_structure, ARRAY_SIZE(log_structure));
//    hal.scheduler->delay(20);
    if (dataflash.NeedPrep()) {
        dataflash.Prep();
    }
*/
}

void DataFlashIon::write(void)
{
/*
    dataflash.StartNewLog();
    struct log_Ion pkt = { LOG_PACKET_HEADER_INIT(LOG_ION_MSG), v: (uint16_t)1 };
    dataflash.WriteBlock(&pkt, sizeof(pkt));
//    hal.scheduler->delay(100);
#if CONFIG_HAL_BOARD == HAL_BOARD_SITL || CONFIG_HAL_BOARD == HAL_BOARD_LINUX
    dataflash.flush();
#endif
*/
}

void DataFlashIon::read(void)
{
}