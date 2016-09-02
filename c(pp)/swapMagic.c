unsigned char swapbyte(unsigned char byteToSwap)
{
    byteToSwap = (byteToSwap & 0xF0) >> 4 | (byteToSwap & 0x0F) << 4;
    byteToSwap = (byteToSwap & 0xCC) >> 2 | (byteToSwap & 0x33) << 2;
    byteToSwap = (byteToSwap & 0xAA) >> 1 | (byteToSwap & 0x55) << 1;
    return byteToSwap;
}

uint32_t uSwapByte32(uint32_t myWord)
{
    return ((myWord << 24) | ((myWord << 8) & 0x00FF0000) | ((myWord >> 8) & 0x0000FF00) | ((myWord >> 24) & 0x000000FF));
}

uint32_t uSwapByte24(uint32_t myWord)
{
    return (((myWord << 16) | (myWord & 0xFF00) | ((myWord >> 16) & 0xFF)) & 0x00FFFFFF);
}

uint16_t uSwapByte16(uint16_t myWord)
{
    return ((myWord << 8) | ((myWord >> 8) & 0xFF));
}

int32_t sSwapByte32(int32_t myWord)
{
    return ((myWord << 24) | ((myWord << 8) & 0x00FF0000) | ((myWord >> 8) & 0x0000FF00) | ((myWord >> 24) & 0x000000FF));
}

int32_t sSwapByte24(int32_t myWord)
{
    int32_t myResult = ((myWord << 16) | (myWord & 0xFF00) | ((myWord >> 16) & 0xFF)) & 0x00FFFFFF;
    // if needed : add sign extension
    if ((myResult & 0x00800000) == 0x00800000)
    {
        myResult |= 0xFF000000;
    }
    return (myResult);
}

int16_t sSwapByte16(int16_t myWord)
{
    return ((myWord << 8) | ((myWord >> 8) & 0xFF));
} 