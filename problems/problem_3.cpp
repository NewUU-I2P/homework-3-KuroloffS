#include <string>

std::string problemSolution3(float height, char S) {
    char male = 'M';
    char female = 'F';
    if (S == male) {
        if (height < 1.7) {
            return "Short";
        } else if (height >= 1.7 && height < 1.85) {
            return "Normal";
        } else {
            return "Tall";
        }
    }
    if (S == female) {
        if (height < 1.6) {
            return "Short";
        } else if (height >= 1.6 && height < 1.75) {
            return "Normal";
        } else {
            return "Tall";
        }
    }
    return "Wrong input";
}
