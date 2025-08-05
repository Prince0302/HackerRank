void miniMaxSum(vector<int> arr) {
    long total = 0;
    int minVal = arr[0];
    int maxVal = arr[0];

    for (int num : arr) {
        total += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    cout << total - maxVal << " " << total - minVal << endl;
}

