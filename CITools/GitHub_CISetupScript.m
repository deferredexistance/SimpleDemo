%%Setup Github Options For CI Runner

GitHubOptions = padv.pipeline.GitHubOptions;
GitHubOptions.MatlabInstallationLocation = "C:/Program Files/MATLAB/R2025a/bin";



%% Generate a pipeline configuration file for your project by ...
% calling the padv.pipeline.generatePipeline function ...
% on your padv.pipeline.GitHubOptions object

padv.pipeline.generatePipeline(GitHubOptions)

% By default, the generated pipeline configuration file ...
%     is named simulink_pipeline.yml ...
%     and is located under the project root, 
%     in the subfolder derived > pipeline.
% 
% The generated pipeline configuration file uses the following GitHub Actions:
% 
%     checkout@v3
% 
%     cache@v3
% 
%     upload-artifact@v3
% 
%     download-artifact@v3
