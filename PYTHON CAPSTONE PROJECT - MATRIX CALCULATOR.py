class Matrix:

    def __init__(self, dimension, elements=None):
        self.dimension = dimension
        self.matrix = self.default_matrix(
        ) if elements == None else self.check_elements(elements)

    def __add__(self, other):

        assert type(
            other) == Matrix, f"Matrix cannot be added by {type(other)}"
        assert self.dimension == other.dimension, "Dimensions should be same"
        return Matrix(self.dimension, [[self.matrix[row][column] + other.matrix[row][column] for column in range(self.dimension[1])] for row in range(self.dimension[0])])

    def __sub__(self, other):
        assert type(
            other) == Matrix, f"Matrix cannot be subtracted by {type(other)}"
        assert self.dimension == other.dimension, "Dimensions should be same"
        return Matrix(self.dimension, [[self.matrix[row][column] - other.matrix[row][column] for column in range(self.dimension[1])] for row in range(self.dimension[0])])

    def __mul__(self, other):
        if isinstance(other, Matrix):
            return self.matrix_multiplication(other)
        raise Exception(f"Matrixes cannot be multiplied by {type(other)}")

    def __str__(self):
        return "\n".join(" ".join(str(value) for value in row) for row in self.matrix)

    def check_elements(self, elements):
        if elements:
            if all(map(lambda x: type(x) == list, elements)):
                if all(map(lambda x: type(x) == float or type(x) == int, elements[0])):
                    return elements
            elif all(map(lambda x: type(x) == float or type(x) == int, elements)):
                return self.set_matrix_elements_by_array(elements)
            raise Exception('Invalid Input Type')
        else:
            return self.default_matrix()

    def default_matrix(self, dimensions=None):
        dimension = self.dimension if dimensions == None else dimensions
        assert dimension[0] != 0 and dimension[
            1] != 0, "Dimensions cannot be (0, 0)"
        return [dimension[1] * [0] for _ in range(dimension[0])]

    def set_matrix_elements_by_array(self, elements):
        assert len(elements) == (
            self.dimension[0] * self.dimension[1]), "Number of elements is not equal"
        j = 0
        matrix = []
        for i in range(self.dimension[1], self.dimension[1]*self.dimension[0]+1, self.dimension[1]):
            matrix.append(elements[j:i])
            j = i
        return matrix

    def subtraction(self, constant, matrix=None):
        matrix = self.matrix if matrix is None else matrix
        return Matrix(self.dimension, [[round(matrix[row][column] * constant, 2) for column in range(self.dimension[1])] for row in range(self.dimension[0])])

    def matrix_multiplication(self, other):
        assert self.dimension[1] == other.dimension[0], "The number of columns of the first matrix must equal the number of rows of the second matrix"
        matrix_array = self.default_matrix(
            [self.dimension[0], other.dimension[1]])
        for i in range(self.dimension[0]):
            for j in range(other.dimension[1]):
                for k in range(other.dimension[0]):
                    matrix_array[i][j] += self.matrix[i][k] * \
                        other.matrix[k][j]
        return Matrix([self.dimension[0], other.dimension[1]], matrix_array)


class MatrixCalculator:

    def __init__(self):
        self.matrices = []
        self.count = 0
        self.choices = {1: self.addition, 2: self.subtraction, 3: self.matrix_multiplication,
                        4: exit}
        self.prompts = {1: ['Enter size of matrix: ', 'Enter matrix: '],
                        2: ['Enter size of first matrix (row column): ', 'Enter size of second matrix (row column): ', 'Enter elements of first matrix: ', 'Enter elements of second matrix: ']}
        self.main()

    def clear_matrices_and_count(self):
        self.matrices = []
        self.count = 0

    def display_choices_and_input(self):
        print("1. Add matrices\n2. Multiply subtraction\n3. Multiply matrices\n4. Exit")
        self.choices[int(input('Your choice: '))]()

    def input_matrix(self, matrix, n):
        print(self.prompts[n][n + self.count])
        for row in range(len(matrix.matrix)):
            inp = input().split()
            try:
                matrix.matrix[row] = list(map(int, inp))
            except:
                matrix.matrix[row] = list(map(float, inp))
        self.count += 1

    def input_matrix_n_times(self, n):

        for i in range(n):
            self.matrices.append(
                Matrix(list(map(int, input(self.prompts[n][i]).split()))))
            assert len(
                self.matrices[i].dimension) == 2, "Dimension is a list with two values, rows and columns only"
            self.input_matrix(self.matrices[i], n)

    def addition(self):

        self.input_matrix_n_times(2)

        print('The result is: ')
        print(self.matrices[0] + self.matrices[1], " ", sep='\n')
        self.clear_matrices_and_count()

    def subtraction(self):
        self.input_matrix_n_times(2)

        print('The result is: ')
        print(self.matrices[0] - self.matrices[1], " ", sep='\n')
        self.clear_matrices_and_count()

    def matrix_multiplication(self):

        self.input_matrix_n_times(2)
        if self.matrices[0].dimension[1] != self.matrices[1].dimension[0]:
            print('The operation cannot be performed.', "", sep='\n')
            return

        print('The result is: ')
        print(self.matrices[0] * self.matrices[1], " ", sep='\n')
        self.clear_matrices_and_count()

    def main(self):
        while True:
            self.display_choices_and_input()


print()
print()
print("Matrix Calculator By Sayandeep Pal")
print()
print()
MatrixCalculator()
