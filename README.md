# pytest-c-code
Here I would like show how can you test c code with pytest and get coverage.
I am using a simple calculator.c to get the check the tests coverage of the binaries

### Create a virtual environment
```
python3 -m venv toolchain
```
The above command creates a virtual environment named toolchain. Activate the toolchain
in order to install our dependencies 
 
```
 source toolchain/bin/activate
```
Now install dependencies from the requirements.txt file

```text
pip install -r requirement.txt
```
We use gcovr package to get the coverage for the test run

```text
pytest tests.py::test_function_name
```
This will output an txt file which shows us the code coverage by that function.