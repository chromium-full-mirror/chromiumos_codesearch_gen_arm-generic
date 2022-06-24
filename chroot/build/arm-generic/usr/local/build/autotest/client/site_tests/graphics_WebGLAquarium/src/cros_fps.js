crosFpsCounter = function() {
  this.totalInterFrameTime = 0.0;
  this.totalSquaredInterFrameTime = 0.0;
  this.totalRenderTime = 0.0;
  this.totalSquaredRenderTime = 0.0;
  this.totalFrames = 0;
}

crosFpsCounter.prototype.update = function(elapsedTime, renderTime) {
  this.totalInterFrameTime += elapsedTime;
  this.totalSquaredInterFrameTime += elapsedTime * elapsedTime;
  this.totalRenderTime += renderTime;
  this.totalSquaredRenderTime += renderTime * renderTime;
  this.totalFrames += 1;
}

crosFpsCounter.prototype.reset = function() {
  this.totalInterFrameTime = 0.0;
  this.totalRenderTime = 0.0;
  this.totalFrames = 0;
}

crosFpsCounter.prototype.getAvgFps = function() {
  return this.totalFrames / this.totalInterFrameTime;
}

crosFpsCounter.prototype.getAvgInterFrameTime = function() {
  return this.totalInterFrameTime / this.totalFrames;
}

crosFpsCounter.prototype.getStdInterFrameTime = function() {
  return Math.sqrt(
      (this.totalFrames / (this.totalFrames - 1)) *
      ((this.totalSquaredInterFrameTime / this.totalFrames) -
       Math.pow(this.getAvgInterFrameTime(), 2)));
}

crosFpsCounter.prototype.getAvgRenderTime = function() {
  return this.totalRenderTime / this.totalFrames;
}

crosFpsCounter.prototype.getStdRenderTime = function() {
  return Math.sqrt(
      (this.totalFrames / (this.totalFrames - 1)) *
      ((this.totalSquaredRenderTime / this.totalFrames) -
       Math.pow(this.getAvgRenderTime(), 2)));
}
