//26. ɾ�����������е��ظ���
//����һ�� �������� ������ nums ������ ԭ�� ɾ���ظ����ֵ�Ԫ�أ�ʹÿ��Ԫ�� ֻ����һ�� ������ɾ����������³��ȡ�Ԫ�ص� ���˳�� Ӧ�ñ��� һ�� ��
//
//������ĳЩ�����в��ܸı�����ĳ��ȣ����Ա��뽫�����������nums�ĵ�һ���֡����淶��˵�������ɾ���ظ���֮���� k ��Ԫ�أ���ô nums ��ǰ k ��Ԫ��Ӧ�ñ������ս����
//
//�����ս������ nums ��ǰ k ��λ�ú󷵻� k ��
//
//��Ҫʹ�ö���Ŀռ䣬������� ԭ�� �޸��������� ����ʹ�� O(1) ����ռ����������ɡ�
#define _CRT_SECURE_NO_WARNINGS 1

//˼·1
//�ҵ�һ���ظ�Ԫ�ؾ�ɾ�� ʱ�䣺O(N^2) �ռ䣺O(1)
//int removeDuplicates(int* nums, int numsSize) {
//	int length = numsSize;
//	//�����ظ�Ԫ��
//	int i = 0;
//	for (i = 0; i < length-1;) {
//		//�Ƿ����һ������ͬ
//		if (nums[i] == nums[i + 1]) {
//			//����ǰ�ƶ�
//			int j = i;
//			for (; j < length-1; j++) {
//				nums[j] = nums[j + 1];
//			}
//			length--;
//		}
//		else {
//			i++;
//		}
//	}
//	return length;
//}
//
////˼·2
////˫ָ�� ʱ�䣺O(N) �ռ䣺O(1)
//int removeDuplicates(int* nums, int numsSize) {
//		int src = 0;
//		int des = 0;
//		int newLength = 1;
//		while (src < numsSize) {
//			//�ҵ��ظ�Ԫ��
//			if (nums[src] == nums[des]) {
//				//��һ��Ԫ��
//				src++;
//			}
//			//�����ظ�Ԫ��
//			else {
//				//����Ԫ��
//				nums[++des] = nums[src++];
//				newLength++;
//			}
//		}
//		return newLength;
//}