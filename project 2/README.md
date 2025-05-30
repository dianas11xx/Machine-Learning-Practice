# Project 2

In this project we had to work with a custom handwritten character dataset and perform dimensionality reduction and manifold lerning techniques for visualization and subsequent classification tasks. To test the project, please download the custom handwritten characters dataset (avaliable below) and the missing pipelines/lists models that were too large to upload.

## Custom Handwritten Characters Dataset

The dataset you will be working with is available for download here:
* ["data_train.npy"](https://ufl.instructure.com/files/72621855/download?download_frd=1)
* ["labels_train.npy"](https://ufl.instructure.com/files/72621858/download?download_frd=1)
* ["data_test.npy"](https://ufl.instructure.com/files/72621555/download?download_frd=1)
* ["labels_test.npy"](https://ufl.instructure.com/files/72621857/download?download_frd=1)


## Code Implementation
There are two seperate notebooks used to implement the project:
* [training.ipynb](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/blob/main/training.ipynb)
* [test.ipynb](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/blob/main/test.ipynb)

The training notebook trains the data for each specific model, performing dimensionality reduction algorithms and feature selection.
The test notebook evalutes the final trained models by transforming the test set using the pipelines made in the training notebook. 

## Folders and exported files
Inside of the [pipelines folder](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/tree/main/pipelines)
are the final model pipelines for each model (with a total of 7). These pipelines were exported from the training notebook and imported into the test notebook following the directory:
* ("pipelines/pipeline_name")
One of the pipelines created in Problem 2 for applying a classifier on the original dataset was too large to upload on github, but it is avaliable to download following this link:
* [pipe_Q2_nPCA](https://drive.google.com/file/d/149fpDpFSJVb77y7fkB5WEIHpCU__K_g_/view?usp=sharing)
When you download this file, make sure it is placed inside of the [pipelines folder](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/tree/main/pipelines)

Inside of the [lists folder](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/tree/main/lists)
are a couple of different lists and projection created in problems 1 and 4. The binary_mask and ranking files are used in problem 1 to display the binary mask and heatmap for the question. They are imported into the test notebook following the directory:
* ("lists/binary_mask_name")
* ("lists/ranking_name")
The projection files titled "proj_n_test_Qn" are the test sets with a reduced dimensionality from Problem 4 after the manifold algorithem were performed on them to reduce the dimensionality of the feature space. Two of the projected test sets were too large to upload on github, but are avaliable to download following this link:
* [proj_1250_lle_test_Q4](https://drive.google.com/file/d/1Sqsark8gWcdZF0_A3plae4OhrYOh2jj_/view?usp=sharing)
* [proj_1250_test_Q4](https://drive.google.com/file/d/1NEZL9BnrV5mmUhIqycmI1LBXkYB7hFNS/view?usp=sharing)
When you download these files, make sure they are placed inside of the [lists folder](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/tree/main/lists)


## File Structure

The custom handwritten dataset files should all be in the same directory as the training.ipynb and test.ipynb files.
The lists and pipelines folders also have to be in the same directory as the test.ipynb notebook.

## Technical Report 
The technical report is under the name "Report.pdf" in the repository.

## Notebook PDF's
The pdf's for the training and test notebooks are located under the [pdf's folder](https://github.com/UF-Applied-ML-Systems-F22/project-2-dianas11xx/tree/main/pdf's) in the repo.

## How to use the Code

Once you download the necessary files stated above and place them in the correct structure (look at the "File Structure" section for more details), then running test.ipynb returns all evaluations made on the performance for each model.
If you want to run the trained models (located under the "pipelines" folder) or get the binary mask list/ranking list/reduced test sets (located under the "lists" folder), you would just have to import them using the joblib library (joblib.load) with the correct directory. (joblib.load('pipelines/pipeline_name'))

## Sidenote: 
There are some typos in the training set print statements (such as when printing the accuracy for the training set with PCA, it says without PCA), but it is clarified in the report :)

Project 2 is due Monday, November 14 @ 11:59 PM. Find the complete [rubric](https://ufl.instructure.com/courses/459156/assignments/5412724) in the Canvas assignment.

