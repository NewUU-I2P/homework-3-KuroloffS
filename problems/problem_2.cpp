float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here
    double price1, price2, price3;
    std::cin >> price1;

    std::cin >> price2;

    std::cin >> price3;

    double result = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);


    return result;
}
