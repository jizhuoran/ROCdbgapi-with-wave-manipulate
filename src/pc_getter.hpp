#pragma once

#include <amd-dbgapi.h>

class PCGetter {
public:
	PCGetter();
	~PCGetter();
	uint64_t stop_and_get_pc_offset();
    void continue_wave();
private:
    amd_dbgapi_wave_id_t _last_wave_id; //for resuming usage
};