float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here
    std::cin >> i;

    std::cin >> j;

    std::cin >> k;

    double result = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);

    return result;
}
