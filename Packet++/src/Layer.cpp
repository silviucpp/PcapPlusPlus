#define LOG_MODULE PacketLogModuleLayer

#include <Layer.h>
#include <string.h>

void Layer::copyData(uint8_t* toArr)
{
	memcpy(toArr, m_Data, m_DataLen);
}