from setuptools import find_packages
from setuptools import setup

setup(
    name='beetle_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('beetle_msgs', 'beetle_msgs.*')),
)
