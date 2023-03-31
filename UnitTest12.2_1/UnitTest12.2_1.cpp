#include "pch.h"
#include "CppUnitTest.h"

#include "../AP_12.2_1_Tytysh/AP_12.2_1_Tytysh.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1221
{
	TEST_CLASS(UnitTest1221)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
			int n = sizeof(arr) / sizeof(arr[0]);
			Node* head = createList(arr, n);
			int expected = sumEvenValues(head);

			Assert::AreEqual(expected, 20);
		}
	};
}
