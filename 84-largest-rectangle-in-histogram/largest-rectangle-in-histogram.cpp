class Solution {
    private:
    vector<int> ansnsr, ansnsl;

void NSR(vector<int> &num, int n) {
    stack<pair<int,int>> s;
    ansnsr.clear();

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top().first >= num[i]) {
            s.pop();
        }
        if (s.empty())
            ansnsr.push_back(n);
        else
            ansnsr.push_back(s.top().second);

        s.push({num[i], i});
    }
    reverse(ansnsr.begin(), ansnsr.end());
}

void NSL(vector<int> &num, int n) {
    stack<pair<int,int>> s;
    ansnsl.clear();

    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top().first >= num[i]) {
            s.pop();
        }
        if (s.empty())
            ansnsl.push_back(-1);
        else
            ansnsl.push_back(s.top().second);

        s.push({num[i], i});
    }
}

int MAH(vector<int> &nums, int n) {
    int maxarea = 0;

    for (int i = 0; i < n; i++) {
        int width = ansnsr[i] - ansnsl[i] - 1;
        int area = width * nums[i];
        maxarea = max(maxarea, area);
    }
    return maxarea;
}
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
    NSL(heights, n);
    NSR(heights, n);
    return MAH(heights, n);
        
    }
};