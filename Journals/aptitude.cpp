#include <iostream>
#include <cmath>
// code to find quaratic equation 
// Code by Anshuman Sinha
int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    double root1, root2;
 
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different." << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        std::cout << "Roots are real and the same." << std::endl;
        std::cout << "Root 1 = Root 2 = " << root1 << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        std::cout << "Roots are complex and different." << std::endl;
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}













































/*

Data Science Terms
Dataset - A dataset is a particular instance of data that is ued for analysis or model building at any given time. A dataset comes in different 
flavors such as numerical data, categorical data, text data, image data, voice data and video data. For beginning data science projects, the most 
popular type of dataset is a dataset containing numerical data that is typically stored in a comma separated value (CSV) file format.

Data Wrangling - Data wrangling is the process of converting data from its raw form to a tidy form ready for analysis. Data wrangling is an 
important step in data preprocessing and includes several processes like data importing, data cleaning, data structuring, string processing, HTML
parsing, handles dates and times, handling missing data and text mining.

Data Visualization - It is one of the main tools used to analyse and study relationships between different variables. Data visualization 
(e.g., scatter plots, line graphs, bar plots, histograms, qqplots, smooth densities, boxplots, pair plots, heat maps, etc)
can be used for descriptive analytics. Data visualization is also used in machine learning for data preprocessing and analysis,
feature selection, model selection, model buliding, model testing, and model evaluation. 

Outliers - an outlier is a data point that is very different from the rest of the dataset. Outliers are very common and are expected
in large datasets. One common way to detect outliers in a dataset is by using a box plot. Outliers can significantly degrade the predictive power of a 
machine learning model. Advanced methods for dealing with outliers include the RANSAC method

 
*/
