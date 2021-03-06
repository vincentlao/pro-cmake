#include "GreeterService.h"
#include "ResponseHandler.h"

Status pro::GreeterService::sayHello(ServerContext* context, const HelloRequest* req, HelloResponse* rsp)
{
	rsp->set_message(pro::getResponseHandler()->getResponse(req->name()));
	return Status::OK;
}