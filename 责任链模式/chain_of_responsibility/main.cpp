#include <iostream>
using namespace std;

class PurchaseRequest
{
    public:
    int getType() const
    {
        return type;
    }

    float getPrice() const
    {
        return price;
    }

    int getId() const
    {
        return id;
    }

    PurchaseRequest(const int type,const float price,const int id):type(type),price(price),id(id){}

    

    protected:
    int type;
    float price = 0.f;
    int id = 0;
};

class Approver{
    public:
    void setApprover(Approver* const approver){
        this->approver = approver;
    }

    explicit Approver(const string& name):name(name){}

    virtual void processRequest(PurchaseRequest* purchaseRequest) = 0;

    protected:

    Approver* approver;
    string name;
};

class DepartmentApprover:public Approver{
    public:
    explicit DepartmentApprover(const string& name):Approver(name){}


    void processRequest(PurchaseRequest* purchaseRequest) override
	{
		if(purchaseRequest->getPrice()<=5000)
		{
			cout << "请求编号id=" << purchaseRequest->getId() << "被" << this->name << "处理" << endl;
		}
		else
		{
			approver->processRequest(purchaseRequest);
		}
	}
};

class CollegeApprover :public Approver
{
public:
	explicit CollegeApprover(const string& name)
		: Approver(name)
	{
	}

	void processRequest(PurchaseRequest* purchaseRequest) override
	{
		if (purchaseRequest->getPrice() > 5000 && purchaseRequest->getPrice() <= 10000)
		{
			cout << "请求编号id=" << purchaseRequest->getId() << "被" << this->name << "处理" << endl;
		}
		else
		{
			approver->processRequest(purchaseRequest);
		}
	}
};

class ViceSchoolMasterApprover :public Approver
{
public:
	explicit ViceSchoolMasterApprover(const string& name)
		: Approver(name)
	{
	}

	void processRequest(PurchaseRequest* purchaseRequest) override
	{
		if (purchaseRequest->getPrice() > 10000 && purchaseRequest->getPrice() <= 30000)
		{
			cout << "请求编号id=" << purchaseRequest->getId() << "被" << this->name << "处理" << endl;
		}
		else
		{
			approver->processRequest(purchaseRequest);
		}
	}
};

class SchoolMasterApprover :public Approver
{
public:
	explicit SchoolMasterApprover(const string& name)
		: Approver(name)
	{
	}

	void processRequest(PurchaseRequest* purchaseRequest) override
	{
		if (purchaseRequest->getPrice() > 30000)
		{
			cout << "请求编号id=" << purchaseRequest->getId() << "被" << this->name << "处理" << endl;
		}
		else
		{
			approver->processRequest(purchaseRequest);
		}
	}
};


int main(int argc,char* argv[]){

    PurchaseRequest* purchaseRequest = new PurchaseRequest(1,80000,1);

    DepartmentApprover* department = new DepartmentApprover("张主任");
    CollegeApprover* college = new CollegeApprover("李院长");
    ViceSchoolMasterApprover* viceSchoolMaster = new ViceSchoolMasterApprover("王副校长");
    SchoolMasterApprover* schoolMaster = new SchoolMasterApprover("马校长");

    department->setApprover(college);
    college->setApprover(viceSchoolMaster);
    viceSchoolMaster->setApprover(schoolMaster);
    schoolMaster->setApprover(department);

    viceSchoolMaster->processRequest(purchaseRequest);

    return 0;

}