pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Configure') {
            steps {
                bat 'cmake -S . -B build -A x64'
            }
        }

        stage('Build') {
            steps {
                bat 'cmake --build build --config Debug'
            }
        }

        stage('Run Tests') {
            steps {
                bat 'cd build/Debug && calculator_tests.exe --gtest_output=xml:test_results.xml'
            }
        }

        stage('Publish Test Report') {
            steps {
                junit 'build/Debug/test_results.xml'
            }
        }
    }
}
