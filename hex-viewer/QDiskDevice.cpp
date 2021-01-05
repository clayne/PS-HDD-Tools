#include "QDiskDevice.hpp"

QDiskDevice::QDiskDevice(io::data::DataProvider* dataProvider)
{
  this->dataProvider = dataProvider;
}

qint64 QDiskDevice::readData(char* data, qint64 maxSize)
{
  // TODO: fix me
  //return this->dataProvider->read(data, maxSize);
  this->dataProvider->read(data, maxSize);
  return maxSize;
}

qint64 QDiskDevice::writeData(const char* data, qint64 maxSize)
{
  return 0;
}

bool QDiskDevice::seek(qint64 pos)
{
  this->dataProvider->seek(pos);
  return this->dataProvider->tell() == pos;
}

qint64 QDiskDevice::size() const
{
  return this->dataProvider->getLength();
}