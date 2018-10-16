# Oracle OCCI

Using OCCI to connect database and work

## 1 Preparation

### 1.1 Install Oracle Instant Client

#### 1.1.1 Download Instantclient

Unzip all files into the same directory, then we can get them easily.

- instantclient-sdk-linux.x64-12.2.0.1.0.zip

    >Header File : /instantclient_version/sdk/include

- instantclient-basic-linux.x64-12.2.0.1.0.zip
    >so : /instantclient_version
- instantclient-sqlplus-xxxxx.zip

#### 1.1.2 Create link for the file which contain version information

> ln -s libclntsh.so.12.1 libclntsh.so
> ln -s libclntshcore.so.12.1 libclntshcore.so
> ln -s libocci.so.12.1 libocci.so

### 1.2 Environment

#### 1.2.1 OCCI_INCLUDE

> export OCCI_INCLUDE=/xxxx/xxxx/xxxx

#### 1.2.2 OCCI_LIBRARY_PATH

> export OCCI_LIBRARY_PATH=/xxxx/xxxx/xxxx

## 3 Compile

> gcc -o xxxx -I{$OCCI_INCLUDE} -L{$OCCI_LIBRARY_PATH} xxxx.cxx -lclntsh -locci -lmql1 -lipc1 -lnnz12 -lons -lclntshcore

### 3.1 Parameter

#### 3.1.1 -Wall

## 4 Run

### 4.1 Environment

#### 4.1.1 ORACLE_HOME

#### 4.1.2 LD_LIBRARY_PATH

> Why should set this environment
The value of LIBRARY_PATH is a colon-separated list of directories, much like PATH. When configured as a native compiler, GCC tries the directories thus specified when searching for special linker files, if it can't find them using GCC_EXEC_PREFIX. Linking using GCC also uses these directories when searching for ordinary libraries for the -l option (but directories specified with -L come first)
