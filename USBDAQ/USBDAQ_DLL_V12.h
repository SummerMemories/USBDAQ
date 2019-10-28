
#ifndef _USBCARD_DLL_V12_
#define _USBCARD_DLL_V12_



#ifndef USBCARDV12
#define MYAPI __declspec(dllimport)
#pragma comment(lib,"USBDAQ_DLL_V12.lib")
//#pragma comment(lib,"USBDAQ_DLL_V12X64.lib")
#else
#define MYAPI __declspec(dllexport)
#endif

#ifdef __cplusplus
extern "C" {
#endif


// *********** �豸�򿪺������ɹ�����0 ***********
MYAPI	int __stdcall OpenUsbV12(void);

// *********** �豸�رպ������ɹ�����0 ***********
MYAPI	int __stdcall CloseUsbV12(void);

// *********** USB�豸���¹��غ������ɹ�����0��Ȼ����Ҫ���´��豸 ***********
MYAPI	int __stdcall ResetUsbV12(void);

 
// *********** ��ȡ�豸�����������ɹ�����0 ***********
MYAPI	int __stdcall GetDeviceCountV12(void);

// *********** �л��豸�������ɹ�����0 ***********
MYAPI	int __stdcall SetCurDeviceV12(int Devicenum);


//��忨������������Ҫ���ڰ����Դ����뿪��
// *********** ��ȡ���뿪����ֵ���ɹ�����0 ***********
MYAPI	int __stdcall GetSwitchNumV12(void);

// *********** �����뿪��ֵ�趨��ǰ�忨���ɹ�����0 ***********
MYAPI	int __stdcall SetSwitchNumV12(int ID);


// *********** ���λ�ȡAD�ɼ�������ɹ�����0 ***********
MYAPI	int __stdcall ADSingleV12(int ad_mod, int chan, int gain, float* adResult);


// *********** ��ͨ��AD�����ɼ�һ�����ݣ��ɹ�����0 ***********
MYAPI	int __stdcall ADContinuV12(int ad_mod, int chan, int gain, int Num_Sample, int Rate_Sample, float  *databuf);


// *********** ��ͨ��AD��ͨ�������ɼ�һ�����ݣ��ɹ�����0 ***********
MYAPI	int __stdcall MADContinuV12(int ad_mod, int chan_first, int chan_last, int gain, int Num_Sample, int Rate_Sample, float  *mad_data);


// ********************** ����AD��ͨ���ɼ����������ɹ�����0 **********************
MYAPI	int __stdcall ADContinuConfigV12(int ad_mod, int chan, int gain, int Rate_Sample);

// ********************** ����AD��ͨ���ɼ����������ɹ�����0 **********************
MYAPI	int __stdcall MADContinuConfigV12(int ad_mod, int chan_first, int chan_last, int gain, int Rate_Sample);

// ********************** ���ص�ǰ������������С��USBδ�򿪷���-1 **********************
MYAPI	int __stdcall GetAdBuffSizeV12(void);  //-1 --- erro  

// ********************** ��ȡAD�ɼ����棬�ɹ�����0 **********************
MYAPI	int __stdcall ReadAdBuffV12(float* databuf, int num);

// ********************** AD�����ɼ�ֹͣ���ɹ�����0 **********************
MYAPI	int __stdcall ADContinuStopV12(void);



// *********** DAͨ����ֵ������ɹ�����0 ***********
MYAPI	int __stdcall DASingleOutV12(int chan,int value);

// *********** DAͨ��ɨ�����ݷ��ͣ��ɹ�����0 ***********
MYAPI	int __stdcall DADataSendV12(int chan,int Num,int *databuf);

// *********** DAͨ��ɨ��������ã��ɹ�����0 ***********
MYAPI	int __stdcall DAScanOutV12(int chan,int Freq,int scan_Num);

// *********** PWM������ã��ɹ�����0 ***********
MYAPI	int __stdcall PWMOutSetV12(int chan,int Freq,float DutyCycle);
//2.0  ��5.0��ͬ

// *********** PWM�������ã��ɹ�����0 ***********
MYAPI	int __stdcall PWMInSetV12(int mod);

// *********** PWM��������ȡ���ɹ�����0 ***********
MYAPI	int __stdcall PWMInReadV12(float* Freq, int* DutyCycle);

// *********** �������������ã��ɹ�����0 ***********
MYAPI	int __stdcall CountSetV12(int mod);

// *********** �����������ȡ���ɹ�����0 ***********
MYAPI	int __stdcall CountReadV12(int* count);

// *********** ����������趨���ɹ�����0 ***********
MYAPI	int __stdcall DoSetV12(unsigned char chan,unsigned char state);

// *********** �����������ȡ���ɹ�����0 ***********
MYAPI	int __stdcall DiReadV12(unsigned char *value);

// *********** ��ȡ�豸ID�ţ��ɹ�����0 ***********
MYAPI	unsigned int __stdcall GetCardIdV12(void);

#ifdef __cplusplus
}
#endif



#endif

/*  delphi


function   OpenUsbV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   CloseUsbV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   GetDeviceCountV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function  SetCurDeviceV12(Devicenum:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll';

function   ADSingleV12(admod:integer;chan:integer;gain:integer;adResult:psingle):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   ADContinuV12(admod:integer;chan:integer;gain:integer;Num_Sample:integer;  Rate_Sample:integer;databuf:psingle):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   MADContinuV12(admod:integer;chan_first:integer;chan_last:integer;gain:integer;Num_Sample:integer; Rate_Sample:integer; mad_data:psingle):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   ADContinuConfigV12(admod:integer;chan:integer;gain:integer; Rate_Sample:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   MADContinuConfigV12(admod:integer;chan_first:integer;chan_last:integer;gain:integer; Rate_Sample:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll';

function   GetAdBuffSizeV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   ReadAdBuffV12(adbuf:psingle;num:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   ADContinuStopV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll';


function   DASingleOutV12(chan:integer;value:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   DADataSendV12(chan:integer;Num:integer;databuf:pinteger):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   DAScanOutV12(chan:integer;Freq:integer;scan_Num:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   PWMOutSetV12(chan:integer;Freq:integer;DutyCycle:single):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   PWMInSetV12(mode:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   CountSetV12(mode:integer):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   PWMInReadV12(Freq:psingle;DutyCycle:pinteger):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;
function   CountReadV12(count:pinteger):integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;

function   DoSetV12(chan:Byte;state:Byte):integer;stdcall;external 'USBDAQ_DLL_V12.dll';
function   DiReadV12(inport:pByte):integer;stdcall;external 'USBDAQ_DLL_V12.dll';

function   GetCardIdV12:integer;stdcall;external 'USBDAQ_DLL_V12.dll' ;

*/

