//猫狗收容所
//第一个收容方式：直接收养所有动物中最早进入收容所的
//第二个收容方式：选择收养动物的类型，并收养该种动物中最早进入收容所的动物
//描述给定一个操作int[][2]ope(vector<vector<int>)代表所有事件，第一个元素为1，表示有动物
//进入收容所，第二个元素为动物编号，正数代表狗，负数代表猫，若第一个元素为2，则代表有人
//收养动物，第二个元素若为0表示第一种收容方式，若为1，则指定收养狗，若为-1则指定收养猫
//
//测试用例：[[1,1],[1,-1],[2,0],[2,-1]]
//返回[1,-1]

思路：
定义两个vector<int>对象A和B，分别用于存放收容所里的动物和被收养的动物 
  
操作如下： 
  
对ope数组从按行从i = 0 ~ ope.size() -1遍历 
  
1、指令为1（ope[i][0] =
  1）时，即有动物进来，则将动物序号压入A--执行A.push_back(ope[i][1]); 
  

2、指令为2（ope[i][0] = 2）时，即有动物被收养，此时首先判断A是否为空，即是否有动物 
  ????
1）如果A为空，则continue 
  ????
2）如果A不为空 
  ????????
1.如果操作为ope[i][1] =
  0，即收养最先进来的动物，则将A[0]压入B，执行B.push_back(A[0])，然后在A中删除对应元素，即执行A.erase(A.begin())； 
  
????????
2.如果操作为ope[i][1] =
  1，即收养最先进来的狗，此时遍历A找到第一个狗，然后将找到的元素压入B，再在A中删除对应元素； 
  ??
??????
3.如果操作为ope[i][1] =
  -1，即收养最先进来的猫，此时遍历A找到第一个猫，然后将找到的元素压入B，再在A中删除对应的元素。 
  

遍历完成之后，返回B



vector<int> asylum(vector<vector<int> > ope)
{
	vector<int> res, arr;
	int size = ope.size();
	if (ope.empty())
		return arr;
	for (int i = 0; i < size; i++)
	{
		if (ope[i][0] == 1)
		{
			res.push_back(ope[i][1]);
		}
		else if (ope[i][0] == 2)
		{
			if (!arr.empty())
			{
				if (ope[i][1] == 0)
				{
					res.push_back(arr[0]);
					arr.erase(arr.begin());
				}
				else if (ope[i][1] == 1)
				{
					for (int j = 0; j < res.size(); j++)
					{
						if (arr[j]>0)
						{
							res.push_back(arr[j]);
							arr.erase(arr.begin() + j);
							break;
						}
					}
				}
				else if (ope[i][1] == 2)
				{
					for (int j = 0; j < res.size(); j++)
					{
						if (arr[j]>0)
						{
							res.push_back(arr[j]);
							arr.erase(arr.begin() + j);
							break;
						}
					}
				}
			}
		}
		return res;
	}
}