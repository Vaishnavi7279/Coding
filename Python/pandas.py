#panda functions ; Working with dataframes
import pandas as pd
import numpy as np
from numpy.random import randn
np.random.seed(101) #saves the previously generated random values on the system. Generates the nucleus
df = pd.DataFrame(randn(5,4),index='A B C D E'.split(),columns='W X Y Z'.split()) #generates 5*4 matrix with given indeces
x=df['Length'] #creating a new df of one column named length

df1 = pd.DataFrame(randn(5,5))
df['W'] #gives value of the given column(s)
df['w'].unique() #gives the unique elements of the column i.e. removes duplicacies
df['W']>9 #gives the colm elements >9
df[['W','Z']]
type(df['W']) #gives the type of the given parameter
df['new'] = df['W'] + df['Y'] #creates a new column with elements as sum of elements from the givem column
df1=df.drop('new',axis=1) #deletes the column from a new dataframe
df.drop('new',axis=1,inplace=True) #deletes the column from the original dataframe 
df.drop('E',axis=0) #axis=0: row ; axis=1: column
df.loc['A'] #selects the given parameter
df.iloc[2] #selectts the sub parameter
df.loc['B','Y']
df.loc[['A','B'],['W','Y']]
#conditional selection based on the given conditions
df>0
df[df>0]
df[df['W']>0]
df[df['W']>0]['Y']
df[df['W']>0][['Y','X']]
df[(df['W']>0) & (df['Y'] > 1)]
# df1=df[df['W']>9] creates a new df df1 with the given cond.

#saving dataframes to csv
df. to_csv='dataframes.csv'