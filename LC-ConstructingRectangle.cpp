class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> Rectangle;
        if(area == 0)
        {
            while(Rectangle.size() < 2)
                Rectangle.push_back(0);
            return Rectangle;
        }
        vector<int> Closest;
        Closest.push_back(area);
        Closest.push_back(1);
        for(int i = 2; i <= sqrt(area); i++)
            if(area % i == 0)
            {
                Closest.clear();
                Closest.push_back (area / i);
                Closest.push_back (i);
            }
        Rectangle.push_back(Closest[0]);
        Rectangle.push_back(Closest[1]);
        return Rectangle;
    }
};