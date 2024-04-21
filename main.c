unsigned int rgbToHex(int r, int g, int b) {

    unsigned char R = r;
    unsigned char G = g;
    unsigned char B = b;

    unsigned int hexadecimal = ((R & 0xF8) << 8) | ((G & 0xFC) << 3) | ((B & 0xF8) >> 3);
    return hexadecimal;
}

int main() {
    unsigned int hex = rgbToHex(255, 255, 255);
}