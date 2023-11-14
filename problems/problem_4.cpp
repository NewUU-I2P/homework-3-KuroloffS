#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::stringstream ss(macAddress);
    std::string octet;
    std::getline(ss, octet, ':');

    int firstOctet;
    ss.clear();
    ss.str(octet);
    ss >> std::hex >> firstOctet;

    if (firstOctet % 2 == 0) {
        return "Unicast";
    } else if (firstOctet % 2 != 0) {
        return "Multicast";
    } else if (macAddress == "FF:FF:FF:FF:FF:FF") {
        return "Broadcast";
    }
}
