class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        
      
            double fehrenheit = celsius * 1.80 + 32.00;
            double kelvin = celsius + 273.15;
            
        
        return {kelvin, fehrenheit};
    }
};