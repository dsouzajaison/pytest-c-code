import subprocess

subprocess.call(['g++ -fprofile-arcs -ftest-coverage -fPIC -O0 calculator.c -o calculator'], shell=True)


def test_add():
    subprocess.call(['./calculator 1 + 1'], shell=True)
    subprocess.call(['gcovr -r . -o add.txt'], shell=True)
    subprocess.call(['rm *.gcno'], shell=True)


def test_sub():
    subprocess.call(['./calculator 1 - 1'], shell=True)
    subprocess.call(['gcovr -r . -o sub.txt'], shell=True)
    subprocess.call(['rm *.gcno'], shell=True)


def test_multiply():
    subprocess.call(['./calculator 1 _ 1'], shell=True)
    subprocess.call(['gcovr -r . -o mul.txt'], shell=True)
    subprocess.call(['rm *.gcno'], shell=True)


def test_div():
    subprocess.call(['./calculator 1 / 1'], shell=True)
    subprocess.call(['gcovr -r . -o div.txt'], shell=True)
    subprocess.call(['rm *.gcno'], shell=True)
