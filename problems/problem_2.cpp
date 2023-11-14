float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here
    double result = (i > j) ? ((i > k) ? i : k) : ((j > k) ? j : k);

    return result;
}
