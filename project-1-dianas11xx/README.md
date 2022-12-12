# Project 1

In this project, we had to work with a supermarket sales dataset and implement different regression and classification tasks. These models were used to predict three different attributes: gross income, unit price, and day of purchase. 
For the regression tasks, we trained a multiple linear regression with lasso regression and without lasso regression.
For the classifications tasks, I chose to train a Decision Tree Classifier and a Random Forest Classifier. 

## Code Implementation 
There are two seperate notebooks used to implement the project: 
[training.ipynb](https://github.com/UF-Applied-ML-Systems-F22/project-1-dianas11xx/blob/main/training.ipynb)
[test.ipynb](https://github.com/UF-Applied-ML-Systems-F22/project-1-dianas11xx/blob/main/test.ipynb)

The training notebook trains the data for each specific model and performs hyperparameter tuning.
The test notebook evaluates the final trained models in the test set. It include all the trained objects and evaluates the performance.

Inside of the [test_sets folder](https://github.com/UF-Applied-ML-Systems-F22/project-1-dianas11xx/tree/main/test_sets)
are the test_sets and t_test sets used for each model, where M1 corresponding to problem 2, M2 corresponds to problem 3, and M3 corresponds to problem 6. These files are exported from the training notebook and imported into the test notebook following the directory: ("test_sets/test_set_name").

Inside of the [pipelines folder](https://github.com/UF-Applied-ML-Systems-F22/project-1-dianas11xx/tree/main/pipelines)
are the final model pipelines for each model (with a total of 6). These pipelines were exported from the training notebook and inmported into the test notebook following the directory: ("pipelines/pipelines_name").

## File structure
The supermarket_sales.csv file has to be in the same directory as the training.ipynb and test.ipynb.
The test_sets and pipelines folders also have to be in the same directory as the test.ipynb notebook.
## Technical Report
The technical is under the name "Report.pdf" in the repository.
## Notebook PDF's
The pdf's for the training and test notebooks are located under the [pdf's](https://github.com/UF-Applied-ML-Systems-F22/project-1-dianas11xx/tree/main/pdf's) folder in the repository
## Dataset - Supermarket Sales

The dataset you will be working with has been pushed to this repository under the name "supermarket_sales.csv".

## How to use code
If you have the correct file system set up (look at the "File Structure" section for more details), then running the test.ipynb returns all the evaluations made on the performance for each model. 
If you want to run the trained models (located under the "pipelines" folder) or get the test sets used (under "test_sets" folder), you would just have to import them using the joblib library (joblib.load) with the correct directory. (joblib.load('test_sets/X_test_M3.pkl')

### Side note about seld-defined attributes
In my training notebook, I changed the 'Date' column name to 'Day of Week' for more clarity. 
## Edit this READ-ME

Please edit this read-me file with information about your project. There are no requirements for this readme file, but you can find a [template here](https://github.com/catiaspsilva/README-template).
