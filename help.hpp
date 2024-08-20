#ifndef HPP_HELP
#define HPP_HELP

#include <string>

const std::string g_strHelp = R"(
�÷�: ./TronAddressGen [ѡ��]

  ����:
    --help              ��ʾ������Ϣ

  ��������ģʽ:
    --matching          ƥ�����롢�ļ��򵥸���ַ��

  ƥ������:
    --prefix-count      ��Сǰ׺ƥ��������Ĭ��ֵΪ 0
    --suffix-count      ��С��׺ƥ��������Ĭ��ֵΪ 6
    --quit-count        �����ɵ��������ڴ�ֵʱ�˳�����Ĭ��ֵΪ 0

  �豸����:
    --skip              �����������������豸

  �������:
    --output            ���������ļ�
    --post              ���Ҫ�������� URL

ʾ��:

  ./TronAddressGen --matching profanity.txt
  ./TronAddressGen --matching profanity.txt --skip 1
  ./TronAddressGen --matching profanity.txt --prefix-count 1 --suffix-count 8
  ./TronAddressGen --matching profanity.txt --prefix-count 1 --suffix-count 10 --quit-count 1
  ./TronAddressGen --matching profanity.txt --output result.txt
  ./TronAddressGen --matching profanity.txt --post http://127.0.0.1:7002/api
  ./TronAddressGen --matching TUqEg3dzVEJNQSVW2HY98z5X8SBdhmao8D --prefix-count 2 --suffix-count 4 --quit-count 1

����:

  TronAddressGen ��һ������ Tron �����ٵ�ַ������: https://tron.network/
  �����������̫�� profanity �������޸�: https://github.com/johguse/profanity
  ��ȷ�������еĳ����Ǵ����µ�ַ���ص�: https://github.com/GG4mida/profanity-tron
  ����: telegram -> @jackslowfak
  �����޸���telegram -> @MrMiHa

FBI ����:

  ��ʹ�����ɵ����ٵ�ַ֮ǰ����ʼ����֤���Ƿ����ӡ��˽Կƥ�䡣
  ��ʼ�նԵ�ַ���ж���ǩ����ȷ���˻���ȫ��
)";

#endif /* HPP_HELP */
