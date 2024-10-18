class Solution {
public:
    double angleClock(int hour, int minutes) {
          int dom = minutes*6;
        double doh = hour*30 + minutes*0.5;
        return min(abs(doh-dom) , 360-abs(doh-dom));
    }
};